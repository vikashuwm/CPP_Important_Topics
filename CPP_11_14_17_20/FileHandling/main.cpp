#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    const string textFileName = "data.txt";
    const string binaryFileName = "binary_data.bin";

    // Writing to a text file
    ofstream outputTextFile(textFileName, ios::out | ios::trunc); // Open file for writing, truncate if exists

    if (!outputTextFile) {
        cerr << "Failed to open text file for writing: " << textFileName << endl;
        return 1;
    }

    // Write integers from 0 to 9 to the text file, each on a new line
    for (int i = 0; i < 10; i++) {
        outputTextFile << i << endl;
    }

    outputTextFile.close();  // Close the output text file stream

    // Reading from a text file
    ifstream inputTextFile(textFileName, ios::in); // Open file for reading

    if (!inputTextFile) {
        cerr << "Failed to open text file for reading: " << textFileName << endl;
        return 1;
    }

    int number;
    cout << "Contents of the text file: ";
    while (inputTextFile >> number) {  // Read numbers from the file until the end
        cout << number << " ";         // Print the numbers to the console
    }

    inputTextFile.close();  // Close the input text file stream

    cout << "\n\nNow performing input/output using fstream!\n";

    // Reading and writing using fstream
    fstream fileStream(textFileName, ios::in | ios::out | ios::ate); // Open for reading and writing, seek to end

    if (fileStream) {
        // Get the current position (end of file)
        streampos endPosition = fileStream.tellg();

        // Write integers from 10 to 19 to the file, each on a new line
        for (int i = 10; i < 20; i++) {
            fileStream << i << endl;
        }

        // Move the get pointer to the beginning of the file
        fileStream.seekg(0, ios::beg);

        cout << "Contents of the text file after writing using fstream: ";
        while (fileStream >> number) {
            cout << number << " ";  // Print the numbers to the console
        }

        // Move the put pointer to the end of the file
        fileStream.seekp(endPosition, ios::beg);
    } else {
        cerr << "Failed to open text file for reading and writing: " << textFileName << endl;
    }

    fileStream.close();  // Close the file stream

    cout << "\n\nNow performing input/output using fstream in binary mode!\n";

    // Opening the file in binary mode for both reading and writing
    fstream binaryFileStream(binaryFileName, ios::in | ios::out | ios::binary | ios::trunc); // Open for reading and writing in binary mode, truncate if exists

    if (binaryFileStream) {
        // Writing integers from 20 to 29 to the binary file
        for (int i = 20; i < 30; i++) {
            binaryFileStream.write(reinterpret_cast<const char*>(&i), sizeof(int));
        }

        binaryFileStream.seekg(0, ios::beg);  // Move the get pointer to the beginning of the file

        cout << "Contents of the binary file: ";
        while (binaryFileStream.read(reinterpret_cast<char*>(&number), sizeof(int))) {
            cout << number << " ";  // Print the numbers to the console
        }
    } else {
        cerr << "Failed to open binary file for reading and writing: " << binaryFileName << endl;
    }

    binaryFileStream.close();  // Close the binary file stream

    return 0;
}

/*
1. tellg() and tellp()

tellg() returns the current position of the get pointer (read pointer) in the stream.
tellp() returns the current position of the put pointer (write pointer) in the stream.
These functions are useful when you need to know the current position in the file, for example, to keep track of the position before performing a seek operation, or to determine the size of the file.
2. seekg() and seekp()

seekg(offset, direction) sets the position of the get pointer (read pointer) in the stream.
seekp(offset, direction) sets the position of the put pointer (write pointer) in the stream.
The offset parameter specifies the number of bytes to move the pointer, and the direction parameter specifies the starting point for the offset.
The direction can be one of the following:
ios::beg (default) - Position is relative to the beginning of the stream.
ios::cur - Position is relative to the current position pointer.
ios::end - Position is relative to the end of the stream.
3. File Opening Modes

When opening a file using fstream, ifstream, or ofstream, you can specify the opening mode by combining different flags:

ios::in - Open for reading.
ios::out - Open for writing.
ios::app - Append to the end of the file when writing.
ios::ate - Open and seek to the end of the file.
ios::trunc - Truncate the file to zero length if it exists.
ios::binary - Open the file in binary mode (required for reading and writing non-text data).

4. Other File Operations

file.eof() - Returns true if the end-of-file indicator is set for the stream.
file.fail() - Returns true if the stream has encountered an error.
file.clear() - Clears the error and end-of-file indicators for the stream.
file.flush() - Flushes the output buffer to the associated output sequence.
file.good() - Returns true if the stream has no errors and is not at the end-of-file.
These are some of the essential file operations and opening modes in C++. Remember to check the stream's state using functions like is_open(), good(), fail(), and eof() before performing any read or write operations to ensure the stream is in a valid state and handle errors appropriately.
*/