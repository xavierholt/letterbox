# LetterBox

Tri-state toggle buttons for the English alphabet.

Written and maintained by Xavier Holt.

xavierholt@gmail.com

## Overview

The other day, I was playing a word game.  This involved writing down all the
letters in the alphabet, then marking them as "definitely in" or "definitely
out" as I got more information.

After writing the entire alphabet four or five times (A horrible ordeal - do
you have any idea how _long_ the alphabet is!?), I realized, "I could make a
computer do this for me."

This is the result.

## Compiling (on Linux)

_NOTE:_  LetterBox uses the Qt 4 user interface libraries.  Make sure you have
these - and their development headers - before you try to compile.

I haven't bothered to create an automated build process yet, but the process is
pretty straightforward.  Open up a terminal, go to the directory you found this
readme in, and run:

    g++ src/*.cpp -I/usr/include/qt4 -lQtCore -lQtGui -o letterbox

Your Qt headers may be in a different directory, so tweak that part if it
doesn't work.  Feel free to add some optimization flags - it's a toy program,
but a little optimization never hurt anyone...

## Running

This will have created an executable called "letterbox" in the current
directory.  Make sure the style.css file is in the same directory (it should
be), and run:

    ./letterbox

Click on a letter to turn it to a faded "dead" state.  Click it again to turn
it to a bright orange "live" state.  Click it a third time to reset it to its
original, dark grey "waiting" state.

Pressing a letter on the keyboard has the same effect as clicking on it.  The
"Clear" button resets all the letters at once - you can also do this by hitting
the "delete" key on your keyboard.

And that's all there is to it.  Enjoy!

## Tweaking

If you want to change the colors, edit styles.css and restart.  If you've done
any web design, you'll know exactly what to do, but it's a simple enough file
that anyone should be able to figure it out - Google "CSS" for a crash course.

If you want to do something more serious, just open up the source files and have
a go - at a whopping ~140 lines of code it should be grokkable in no time.
