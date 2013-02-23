//
//  WorkoutHistory.h
//  CrossfitSubmitWorkout
//
//  Created by Chris Syversen on 11/19/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Wods;

@interface WorkoutHistory :  NSManagedObject  
{
}

@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) NSString * workoutDescription;
@property (nonatomic, retain) NSString * workoutName;
@property (nonatomic, retain) Wods * wodName;

@end



