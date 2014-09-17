//
//  DetailViewController.h
//  ExampleMagicalRecord
//
//  Created by Владимир on 20.06.14.
//  Copyright (c) 2014 FlatStack. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>
#import <MagicalRecord/MagicalRecord.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

