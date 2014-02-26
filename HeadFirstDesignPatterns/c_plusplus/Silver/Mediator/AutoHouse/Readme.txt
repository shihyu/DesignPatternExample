The 'Mediator' pattern is discussed on page 622 in 'Head First Design Patterns'.

As always, my intent is to implement the example as described in the book; however,
I did have a couple of embellishments: WeatherStation and automation of the example.

The WeatherStation tells auto-house if it is raining and automation of the example
is driving by two (optional) parameters: 'interval' and 'iterations' specifying
the length of a virtual day and the number of days to simulate respectively. The
default is a simulated (yet accelerated) 24 hour day where 1 hour equals one second
and runs for a simulated week where 1 iteration = 1 day.

You can override these values with command-line parameters. As always, (constructive)
feedback is welcomed.
