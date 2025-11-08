# SYSC4001 Assignment 2 - Part 2

## Student Info
**Name:** < Kezi Afulukwe>  
**Student Number:** <101279214>  
**Name:** < Abubakr Mohammed>  
**Student Number:** <101287262>  
---

## Description
This repo contains the source code for Part 2 of SYSC4001 Assignment 2.  
The parent/child processes are created using `fork()` and the child is launched using `execl()`.

- **Parent:** loops forever, printing a cycle counter and noting when the number is divisible by 3.  
- **Child:** loops forever, printing a decreasing counter.  
- Both processes are terminated externally using `ps` + `kill` (as required).

---

## Files Included
| File | Purpose |
|------|---------|
| `part2_parent.c` | Parent process (forks, `execl()` the child, prints cycles & multiples of 3) |
| `part2_child.c`  | Child process (prints a decreasing counter forever) |
| `Makefile`       | Build rules; compile with `make part2` |
| `.gitignore`     | Excludes binaries/object files from the repo |

---

## How to Compile

Run this inside the project directory:

This will generate the executables:

- `part2_parent`
- `part2_child`

---

## How to Run

Start the parent program (it will automatically fork and run the child):
./part2_parent

You should see output from both parent and child processes.

---

## How to Stop the Programs

Press **CTRL + C** in the terminal  
or manually kill them:
ps -ef | grep part2
kill <PID_of_parent> <PID_of_child>
