# Blink in C

This project can be build and upload using `make`. 

You can use `make` to compile and upload the code.

**Note**: The `USBPORT` in Makefile is for macOS only, you need to change it if you're using Linux or Windows.

## Requirements
 - [make](https://en.wikipedia.org/wiki/Make_(software))
 - avr-gcc
 - [avrdude](https://www.nongnu.org/avrdude/)

If you're not sure how to install check the [README](/C/Examples/Blink/README.md) in C directory on root of this repo.

## Compile

You can compile by running

```
make
```

## Program

To program the board you can use

```
make install
```

**Note**: This only works if there's only one device connected.