/*
  Author: Steven Lai

  Description:
    The program reads a PGM image from the file "inImage.pgm",
    and outputs a modified-inverted image to "outImage.pgm"
*/

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}

void writeImage(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("outImage.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

int main() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];
    // Apply the horizontal edge detection operation
    for (int row = 1; row < h - 1; row++) {
        for (int col = 1; col < w - 1; col++) {
            // Compute the edge detection value using the given function
            int value = (img[row - 1][col + 1] + 2 * img[row][col + 1] + img[row + 1][col + 1]) -
                        (img[row - 1][col - 1] + 2 * img[row][col - 1] + img[row + 1][col - 1]);

            // Clip the value to the range [0, 255]
            value = max(0, min(255, value));

            // Assign the computed value to the output pixel
            out[row][col] = value;
        }
    }

    // Handle boundary pixels (assigning black color to non-existing neighbors)
    for (int col = 0; col < w; col++) {
        out[0][col] = 0;          // Top row
        out[h - 1][col] = 0;      // Bottom row
    }
    for (int row = 0; row < h; row++) {
        out[row][0] = 0;          // Leftmost column
        out[row][w - 1] = 0;      // Rightmost column
    }
	// and save this new image to file "outImage.pgm"
	writeImage(out, h, w);
    return 0;

}
