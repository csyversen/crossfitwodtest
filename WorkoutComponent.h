//
//  WorkoutComponent.h
//  CrossfitSubmitWorkout
//
//  Created by Chris Syversen on 11/19/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Wods;

@interface WorkoutComponent :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * repsOrDuration;
@property (nonatomic, retain) NSString * workoutName;
@property (nonatomic, retain) NSString * exerciseType;
@property (nonatomic, retain) Wods * wodRelationship;

@end



