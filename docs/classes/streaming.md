# Streaming Classes

## Basically

Streaming Classes is Two major, **Input(Reader)** and **Output(Writer)**.

Input Classes have two methods.

* `T read();`
* `bool is_end();`

`T read();` method read one of item from input stream.
`bool is_end();` method can check the end of input stream. (like `feof != 0`)

`T` is Any-Type of template specified or fixed with class type.

Output Classes have one method.

* `void write(const T& val);`

`write` method write one of item to output stream.

### filereader

`filereader` is for File Read Streaming Class.

### filewriter

`filewriter` is for File Write Streaming Class.


### stdinput

`stdinput` is for Standard Input Streaming Class.

### stdoutput

`stdoutput` is for Standard Input Streaming Class.
