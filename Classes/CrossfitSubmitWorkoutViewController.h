//
//  CrossfitSubmitWorkoutViewController.h
//  CrossfitSubmitWorkout
//
//  Created by Chris Syversen on 10/31/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CrossfitSubmitWorkoutViewController : UIViewController <UITextFieldDelegate> {
	IBOutlet UITextField *txtField;
	NSManagedObjectContext *managedObjectContext;
}

@property(nonatomic, retain) IBOutlet UITextField *txtField;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

-(IBAction) submitWorkout:(id)sender;
-(IBAction) fetchRecords:(id)sender;

@end

