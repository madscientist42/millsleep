# millisleep

One of the annoying things about scripting, especially with embedded systems work is that the granularity of "sleep <x>" is per second.  Well, what if you really, really needed 1.25 seconds of delay?  That isn't available to you via /bin/sh or similar.  You can code it in C/C++, yes...but nobody seems to have made this for scripting because of an assumption that you just need that granularity there.

This silly little application does just that.  It takes in <x> milliseconds and actually sleeps for that amount and exits 0.

That's all it does.  It's so simple that on a POSIX system, while there's not likely to be bugfixes, maint, etc. for it- it should just compile and go.
