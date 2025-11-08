# SYSC4001 Assignment 2 - Part 2

## Student Info
**Name:** <Your Name Here>  
**Student Number:** <Your Student Number Here>  

---

## Description
This repository contains the source code for Part 2 of SYSC4001 Assignment 2.  
The task involves creating a parent and child process using `fork()` and `execl()`.  
The parent process prints a loop counter and reports when the number is a multiple of 3, while the child process prints its own loop and exits when a number is divisible by 7.

---

## Files Included
| File | Purpose |
|------|---------|
| `part2_parent.c` | Source code for parent process |
| `part2_child.c` | Source code for child process |
| `Makefile` | Builds both programs using `make part2` |
| `.gitignore` | Prevents binary files from being committed |

---

## How to Compile
Inside this folder run:

```
make part2
```

This will generate the executables:

- `part2_parent`
- `part2_child`

---

## How to Run

### Start the parent program:
```
./part2_parent
```

The parent will automatically fork and launch the child program.

---

## How to Stop
Use:
```
ps -ef | grep part2
kill <PID>
```

or press **Ctrl + C** in the terminal running the parent.

---

## Notes
- No binaries are included in this repo (as required)
- The code compiles and runs on Ubuntu Linux with GCC
- See Makefile for build targets
