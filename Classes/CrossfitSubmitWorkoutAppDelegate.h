//
//  CrossfitSubmitWorkoutAppDelegate.h
//  CrossfitSubmitWorkout
//
//  Created by Chris Syversen on 10/31/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CrossfitSubmitWorkoutViewController;

@interface CrossfitSubmitWorkoutAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    CrossfitSubmitWorkoutViewController *viewController;
	
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;	    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet CrossfitSubmitWorkoutViewController *viewController;

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (NSString *)applicationDocumentsDirectory;

@end

