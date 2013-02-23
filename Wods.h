//
//  Wods.h
//  CrossfitSubmitWorkout
//
//  Created by Chris Syversen on 11/19/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Workout;

@interface Wods :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * workoutName;
@property (nonatomic, retain) NSSet* workoutHistoryName;
@property (nonatomic, retain) NSSet* WorkoutComponentRelationship;

@end


@interface Wods (CoreDataGeneratedAccessors)
- (void)addWorkoutHistoryNameObject:(Workout *)value;
- (void)removeWorkoutHistoryNameObject:(Workout *)value;
- (void)addWorkoutHistoryName:(NSSet *)value;
- (void)removeWorkoutHistoryName:(NSSet *)value;

- (void)addWorkoutComponentRelationshipObject:(NSManagedObject *)value;
- (void)removeWorkoutComponentRelationshipObject:(NSManagedObject *)value;
- (void)addWorkoutComponentRelationship:(NSSet *)value;
- (void)removeWorkoutComponentRelationship:(NSSet *)value;

@end

