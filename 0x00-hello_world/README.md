this file contains all commands used on this project.

1-gcc -E "$CFILE" -o c
write this command to compile c file name saved in variable $cfile and save output into new file called c.

2-gcc -S "$CFILE" -o "${CFILE%.c}.s"
this command will creat assimbly file that will be named exactly like the name saved iin variable {$File}.

3-gcc -c "$CFILE" -o "${CFILE%.c}.o"
use this command to compile file without link.

4-gcc "$CFILE" -o cisfun
use this command to compile C file and save output into new file named cisfun

