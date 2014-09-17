//
//  MasterViewController.h
//  ExampleMagicalRecord
//
//  Created by Владимир on 20.06.14.
//  Copyright (c) 2014 FlatStack. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>
#import <MagicalRecord/CoreData+MagicalRecord.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

#if !USING_MAGICAL_RECORD
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
#endif


@end

