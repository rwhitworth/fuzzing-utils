#!/usr/bin/env perl
use strict;

my $counter = 1;

while (<>)
{
  print "a" . $counter . "=" . $_; 
  $counter++;
}
