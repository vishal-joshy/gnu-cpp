extern "C" int Add(int a, int b) { return a + b; }
extern "C" int Sub(int a, int b) { return a - b; }
extern "C" int Pow(int a) { return a * a; }

// compilation - create <filename>.so
//  g++ -fpic <inputFilename> -shared -o <outputFile>
//  -fpic - position independent code;