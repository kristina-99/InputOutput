Class Stream - reads from console input until reaching the end of the file(^Z on a new line after the input)
Class Filter - class Filter takes a Stream object as parameter in it's constructor and a word. The class "filters" the input and only reads the lines that contain the specified word.
Class Sink - class Sink takes a Stream or Filter object as parameter and prints their text on the console
Class FileSink - inherits Sink; takes a Stream or Filter object and creates a text file with their text
