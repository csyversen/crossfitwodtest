//
//  CrossfitSubmitWorkoutViewController.m
//  CrossfitSubmitWorkout
//
//  Created by Chris Syversen on 10/31/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import "CrossfitSubmitWorkoutViewController.h"
#import "Wods.h"

@implementation CrossfitSubmitWorkoutViewController

@synthesize txtField;
@synthesize managedObjectContext;


-(IBAction) submitWorkout:(id)sender
{
	NSError *error;
	
	Workout *workout = (Workout *)[NSEntityDescription insertNewObjectForEntityForName:@"Workout" inManagedObjectContext:managedObjectContext];
	[workout setWorkoutDescription:[txtField text]];
	[workout setCreationDate:[NSDate date]];
	
	if (![managedObjectContext save:&error]) 
	{
		NSLog([error localizedDescription]);
	}
	NSFetchRequest *request = [[NSFetchRequest alloc] init];
	NSEntityDescription *description = [NSEntityDescription entityForName:@"Workout" inManagedObjectContext:managedObjectContext];
	//[[request setEntity:]}
	[request setEntity:description];
	
	error = nil;
	NSArray *fetchedObjects = [managedObjectContext executeFetchRequest:request error:&error];
	if (fetchedObjects == nil) {
		NSLog(@"oh no i really don't think this should be happening");
		NSLog([error localizedDescription]);
	}
	else {
		for(Workout *obj in fetchedObjects)
		{
			NSLog([obj workoutDescription]);
		}
	}
	[request release];
}


-(IBAction) fetchRecords:(id)sender
{
	NSError *error;
	
	NSFetchRequest *request = [[NSFetchRequest alloc] init];
	NSEntityDescription *description = [NSEntityDescription entityForName:@"Workout" inManagedObjectContext:managedObjectContext];
	[request setEntity:description];
	
	NSArray *fetchedObjects = [managedObjectContext executeFetchRequest:request error:&error];
	
	if (fetchedObjects == nil) 
	{
		NSLog(@"oh no i really don't think this should be happening");
		NSLog([error localizedDescription]);
	}
	else 
	{
		for(Workout *obj in fetchedObjects)
		{
			NSLog([obj workoutDescription]);
		}	
		NSString *str = [[NSString alloc] initWithFormat:@"%d", [fetchedObjects count]];
		NSLog(str);
		[str release];
	}
	[request release];
}




- (BOOL)textFieldShouldReturn:(UITextField *)textField {
	[textField resignFirstResponder];
	return YES;
}



/*
// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
        // Custom initialization
    }
    return self;
}
*/


/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/


/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
}
*/


/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


- (void)dealloc {
	[txtField release];
	[managedObjectContext release];
	
    [super dealloc];
}

@end
