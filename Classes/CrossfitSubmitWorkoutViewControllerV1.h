//
//  CrossfitSubmitWorkoutViewControllerV1.h
//  CrossfitSubmitWorkout
//
//  Created by Chris Syversen on 11/19/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CrossfitSubmitWorkoutViewControllerV1 : UIViewController <UITextFieldDelegate> {
	IBOutlet UITextField *txtField;
	NSManagedObjectContext *managedObjectContext;
}

@property(nonatomic, retain) IBOutlet UITextField *txtField;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

-(IBAction) submitWorkout:(id)sender;
-(IBAction) fetchRecords:(id)sender;

@end
