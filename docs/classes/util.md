# Utility Classes

### file_pointer

`file_pointer` class is overlap `FILE*` of shared object.

When an object is copied, call `fclose` when the last instance is released.

### ws_split_reader

`ws_split_reader` class was read of Whitespace tokenized.

### looper

```
virtual bool action() =0;
void run() { while(action()); }
```

This class is simplest code! :+1:

`looper` class call pure-virtual-function `action` while returned `true`.