# Image Pattern Search on CPU (without parallelization)

This project is developed for the term project of the CMP641 - Software Development for Parallel Computers lecture taaught by [Kayahan Mustafa Imre](https://web.cs.hacettepe.edu.tr/~kimre/).

In this implementation, 5x5 pattern search on a 16-bit grayscale image is implemented. Search is done on upper and lower triangle of the image matrix seperately. This implementation is ran sequentially on the cpu (non-parallelization).

The algorithm resembles basically convolution process except it makes comparison instead of multiplication while searching the pattern on the image matrix.

## Dependencies

The implementation needs only [lodepng](https://lodev.org/lodepng/) PNG image processing library, yet it is embedded into the project.

## Compilation
### Windows
You may need [GnuMake32](https://gnuwin32.sourceforge.net/downlinks/make.php). Please download and install it first if you haven't.

Then, in the project root folder, run

```
make
```

After invoking the "make", it will start to compile the project according to your OS. 

#### Run

After the compilation, you can run the program with a command line statement like this:

```
psearch.exe ../images/image_8192.png ../images/pattern_8192_1.png
```

<img src="/assets/images/impl_cpu_ss_1.png" alt="Pattern search implementation running on Windows" style="width:%75;" target="_blank"/>

## Resources
You may need test images. You can download [here](https://drive.google.com/file/d/14GBRgUel3fOdJVDOdlZ3HJh3_1vUsWZt/view?usp=sharing). These all random checker images of different sizes. You can also create your own test images [here](https://onlinetools.com/image/generate-random-image).

