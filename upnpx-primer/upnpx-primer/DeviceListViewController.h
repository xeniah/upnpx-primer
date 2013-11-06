//
//  DeviceListViewController.h
//  upnpx-primer
//
//  Created by Pugetworks on 11/6/13.
//  Copyright (c) 2013 ELINEF. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UPnPDB.h"

@interface DeviceListViewController : UITableViewController<UPnPDBObserver>
{
    NSArray *mDevices; //BasicUPnPDevice*

}

//protocol UPnPDBObserver
-(void)UPnPDBWillUpdate:(UPnPDB*)sender;
-(void)UPnPDBUpdated:(UPnPDB*)sender;
@end
