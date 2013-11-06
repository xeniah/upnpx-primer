upnpx-primer
============

Setting up a workspace with the UPNPX static library. I rearranged the original upnpx project a bit so that the headers reside 
in the same directory as the project meta, for ease of importing and more concise compiler instructions (User Header Search Paths, I am looking at you!).

Original instructions on how to use the static library are here: https://code.google.com/p/upnpx/wiki/Libupnpx 
They are a bit outdated, here is what changed: 
  * both projects (primer and the library) are happily together in same workspace
  * User Header Search Paths were, naturally, updated for my local paths
  * For XCode 5, iOS 7, library libstdc++.6.0.9.dylib needs to be added. For more on this issue, see http://stackoverflow.com/questions/18959691/ios7-only-stdlibc-linking-issue
