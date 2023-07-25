import curses
import wrapper from curses

def main(stdscr):
  stdscr.clear()
  stdscr.addstr(20, 20, "SIMPLES STATISTICS SOFTWARE", (curses.A_BOLD | curses.COLOR_GREEN))
  stdscr.addstr(25, 40, "(hit any key to continue)")
  stdscr.getch()

wrapper(main)
