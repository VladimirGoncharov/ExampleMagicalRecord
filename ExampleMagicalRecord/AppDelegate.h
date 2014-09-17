//
//  AppDelegate.h
//  ExampleMagicalRecord
//
//  Created by Владимир on 20.06.14.
//  Copyright (c) 2014 FlatStack. All rights reserved.
//

#ifndef USING_MAGICAL_RECORD
    #define USING_MAGICAL_RECORD   0
#endif

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>
#import <MagicalRecord/CoreData+MagicalRecord.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

#if !USING_MAGICAL_RECORD

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

#endif


@end

