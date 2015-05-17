# Hidden Files Toogle for Mac OSX
Switcher hidden files bin for Mac OSX.

Building program:
<code>
  gcc -Wall -g main.c -o hiddenfiles
</code>

Move the binary to the local bin directory:
<code>
  mv hiddenfiles /usr/local/bin
</code>

Use the command - OSX terminal:
<code>
  hiddenfiles on | off
</code>
or
<code>
  hiddenfiles true | false
</code>

The program will only run the appropriate command in background to show or hide your hidden system files.

Enjoy.
