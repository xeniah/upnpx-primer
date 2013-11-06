upnpx-primer
============

Setting up a workspace with the UPNPX static library. I rearranged the original upnpx project a bit so that the headers reside 
in the same directory as the project meta, for ease of importing and more concise compiler instructions (User Header Search Paths, I am looking at you!).

Original instructions on how to use the static library are here: https://code.google.com/p/upnpx/wiki/Libupnpx 
They are a bit outdated, here is what changed: 
  * both projects (primer and the library) are happily together in same workspace
  * User Header Search Paths were, naturally, updated for my local paths
  * Liker Flags are not set. Setting Linker Flags as advised results in errors, without them builds fine.
