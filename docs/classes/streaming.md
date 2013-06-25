# Streaming Classes

## Basically

Streaming Classes divided into two major. **Input(Reader) classes** and **Output(Writer) classes**.

**Input Classes** have two methods.

* `T read();`
* `bool is_end();`

`T read();` method read one of item from input stream.

`bool is_end();` method can check the end of input stream. (like `feof` != 0)

`T` is Any-Type of template specified or fixed with class type.

**Output Classes** have one method.

* `void write(const T& val);`

`write` method write one of item to output stream.

### Constructor

**Constructor parameters Is Not Constant**. it's different for each class.

Please refer to the commentary for each class.

## Classes

### filereader

`filereader` is for File Read Streaming Class.

It has the following methods.

* `typedef int T`
* `int read()`
* `bool is_end()`

`T` is fixed `int` of Type.

`read()` is like or in fact `getc()`.

`is_end()` is like or in fact `feof() != 0`.

#### Constructor

* `filereader(const char* path, bool binary=true)`

The `path` parameters, specify the read/open target file name or path.

If you want to get the contents of a file in **text mode**, you specify `false` to the second argument. (default binary-mode)

### filewriter

`filewriter` is for File Write Streaming Class.

* `typedef int T`
* `void write(int c)`

`T` is fixed `int` of Type.

`write()` is like or in fact `putc()`.

#### Constructor

* `filewriter(const char* path, bool binary=true)`

The `path` parameters, specify the write/open target file name or path.

If you want to write a file in **text mode**, you specify `false` to the second argument. (default binary-mode)

### stdinput

`stdinput` is for Standard Input Streaming Class.

* `typedef int T`
* `int read()`
* `bool is_end()`

`T` is fixed `int` of Type.

`read()` is like or in fact `getchar()`.

`is_end()` is like or in fact `feof(stdin) != 0`.

### stdoutput

`stdoutput` is for Standard Input Streaming Class.

* `typedef int T`
* `void write(int c)`

`T` is fixed `int` of Type.

`read()` is like or in fact `putchar()`.
