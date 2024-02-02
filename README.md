# Image Pattern Search on CPU (without parallelization)

This project is developed for the term project of the CMP641 - Software Development for Parallel Computers lecture taaught by [Kayahan Mustafa Imre](https://web.cs.hacettepe.edu.tr/~kimre/).

In this implementation, 5x5 pattern search on a 16-bit grayscale image is implemented. Search is done on upper and lower triangle of the image matrix seperately. This implementation is ran sequentially on the cpu (non-parallelization).

The algorithm resembles basically convolution process except it makes comparison instead of multiplication while searching the pattern on the image matrix.

## Dependencies

The implementation needs only [lodepng](https://lodev.org/lodepng/) PNG image processing library, yet it is embedded into the project.

You can download test images [here](https://drive.google.com/file/d/14GBRgUel3fOdJVDOdlZ3HJh3_1vUsWZt/view?usp=sharing)

## Compilation
### Windows
You may need [GnuMake32](https://gnuwin32.sourceforge.net/downlinks/make.php). Please download and install it first if you haven't.

Then, in the project root folder, run

```
make
```

After invoking the "make", it will start to compile the project according to your OS. After the compilation, you can run the program with a command line statement like this:

```
psearch.exe ../images/image_8192.png ../images/pattern_8192_1.png
```

<img src="/assets/images/impl_cpu_ss_1.png" alt="Pattern search implementation running on Windows" style="width:%75;"/>

