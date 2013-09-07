//
//  DetailViewController.h
//  Beacon-demo
//
//  Created by Charlie White on 8/6/13.
//  Copyright (c) 2013 Charlie White. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate, CBPeripheralManagerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
