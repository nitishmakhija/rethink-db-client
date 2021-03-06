//
//  RethinkDbClient.h
//  RethinkDbClient
//
//  Created by Daniel Parnell on 14/12/2013.
//  Copyright (c) 2013 Daniel Parnell
//
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//

#import <Foundation/Foundation.h>

extern NSString* kRethinkDbOrderedKeys;

@protocol RethinkDBRunnable;
@protocol RethinkDBSequence;
@protocol RethinkDBObject;
@protocol RethinkDBArray;
@protocol RethinkDBStream;
@protocol RethinkDBDateTime;

typedef id <RethinkDBRunnable> (^RethinkDbJoinPredicate)(id <RethinkDBSequence> left, id <RethinkDBSequence> right);
typedef id <RethinkDBRunnable> (^RethinkDbMappingFunction)(id <RethinkDBObject> row);
typedef id <RethinkDBRunnable> (^RethinkDbReductionFunction)(id <RethinkDBObject> accumulator, id <RethinkDBObject> value);
typedef id <RethinkDBRunnable> (^RethinkDbGroupByFunction)(id <RethinkDBObject> row);
typedef id <RethinkDBRunnable> (^RethinkDbExpressionFunction)(NSArray* arguments);
typedef id <RethinkDBRunnable> (^RethinkDbFilterFunction)(id <RethinkDBObject> row);

typedef void (^RethinkDbDoneBlock)();
typedef void (^RethinkDbSuccessBlock)(id response);
typedef BOOL (^RethinkDbCursorValueBlock)(id response);
typedef void (^RethinkDbErrorBlock)(NSError *error);
typedef void (^RethinkDbArrayBlock)(NSArray *array);

@interface RethinkDBOperation : NSOperation

@property (readonly) int64_t token;

@end

@interface RethinkDBCursor : NSObject

- (void) each:(RethinkDbCursorValueBlock)row fail:(RethinkDbErrorBlock) error;
- (void) close;

@property (readonly) int64_t token;

@end

@interface RethinkDBSequenceCursor : RethinkDBCursor

- (void) each:(RethinkDbCursorValueBlock)row done:(RethinkDbDoneBlock) done fail:(RethinkDbErrorBlock) error;
- (void) next:(RethinkDbCursorValueBlock)success fail:(RethinkDbErrorBlock) error;
- (void) toArrayThen:(RethinkDbArrayBlock)success fail:(RethinkDbErrorBlock) error;
- (NSArray*) toArray:(NSError**)error;

@end

@interface RethinkDBChangeFeed : RethinkDBCursor

@end

@protocol RethinkDBRunnable <NSObject>

- (id) run:(NSError**)error;
- (id <RethinkDBObject>) row;
- (id <RethinkDBObject>) row:(NSString*)key;

- (id <RethinkDBObject>) do:(RethinkDbExpressionFunction)expression withArguments:(NSArray*)arguments;

- (RethinkDBOperation*) runThen:(RethinkDbSuccessBlock)success fail:(RethinkDbErrorBlock)error;

@end

@protocol RethinkDBObject <RethinkDBRunnable>

- (id <RethinkDBSequence>) pluck:(id)fields;
- (id <RethinkDBSequence>) without:(id)fields;
- (id <RethinkDBSequence>) merge:(id)object;

- (id <RethinkDBArray>) match:(NSString*)regex;

- (id <RethinkDBObject>) at:(id)expr;
- (id <RethinkDBSequence>) field:(NSString*)key;

- (id <RethinkDBObject>) add:(id)expr;
- (id <RethinkDBObject>) sub:(id)expr;
- (id <RethinkDBObject>) mul:(id)expr;
- (id <RethinkDBObject>) div:(id)expr;
- (id <RethinkDBObject>) mod:(id)expr;
- (id <RethinkDBObject>) eq:(id)expr;
- (id <RethinkDBObject>) ne:(id)expr;
- (id <RethinkDBObject>) gt:(id)expr;
- (id <RethinkDBObject>) ge:(id)expr;
- (id <RethinkDBObject>) lt:(id)expr;
- (id <RethinkDBObject>) le:(id)expr;
- (id <RethinkDBObject>) not;
- (id <RethinkDBObject>) and:(id)expr;
- (id <RethinkDBObject>) or:(id)expr;
- (id <RethinkDBObject>) any:(NSArray*)expressions;
- (id <RethinkDBObject>) all:(NSArray*)expressions;

- (id <RethinkDBDateTime>) now;
- (id <RethinkDBDateTime>) timeWithYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day timezone:(NSString*)time_zone;
- (id <RethinkDBDateTime>) timeWithYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day hour:(NSInteger)hour minute:(NSInteger)minute seconds:(NSInteger)seconds timezone:(NSString*)time_zone;
- (id <RethinkDBDateTime>) time:(NSDate*)date;
- (id <RethinkDBDateTime>) epochTime:(id)seconds;
- (id <RethinkDBDateTime>) ISO8601:(id)time;

- (id <RethinkDBObject>) branch:(id <RethinkDBObject>) test then:(id <RethinkDBObject>) then otherwise:(id <RethinkDBObject>) otherwise;
- (id <RethinkDBObject>) forEach:(RethinkDbMappingFunction)function;
- (id <RethinkDBObject>) error:(id)message;
- (id <RethinkDBObject>) error;
- (id <RethinkDBObject>) defaultAs:(id)value;
- (id <RethinkDBObject>) expr:(id)value;
- (id <RethinkDBObject>) js:(NSString*)script;
- (id <RethinkDBObject>) coerceTo:(NSString*)type;
- (id <RethinkDBObject>) typeOf;
- (id <RethinkDBObject>) info;
- (id <RethinkDBObject>) json:(NSString*)json;

- (id <RethinkDBObject>) contains:(id)values;

@end

@protocol RethinkDBDateTime <RethinkDBObject>

- (id <RethinkDBObject>) inTimezone:(id)time_zone;
- (id <RethinkDBObject>) timezone;
- (id <RethinkDBObject>) during:(id)from to:(id)to options:(NSDictionary*)options;
- (id <RethinkDBObject>) during:(id)from to:(id)to;
- (id <RethinkDBDateTime>) date;
- (id <RethinkDBDateTime>) timeOfDay;
- (id <RethinkDBObject>) year;
- (id <RethinkDBObject>) month;
- (id <RethinkDBObject>) day;
- (id <RethinkDBObject>) dayOfWeek;
- (id <RethinkDBObject>) dayOfYear;
- (id <RethinkDBObject>) hours;
- (id <RethinkDBObject>) minutes;
- (id <RethinkDBObject>) seconds;
- (id <RethinkDBObject>) toISO8601;
- (id <RethinkDBObject>) toEpochTime;

@end

@protocol RethinkDBSequence <RethinkDBObject>

- (id <RethinkDBSequence>) filter:(id)predicate options:(NSDictionary*)options;
- (id <RethinkDBSequence>) filter:(id)predicate;
- (id <RethinkDBSequence>) filterWith:(RethinkDbFilterFunction) filter;
- (id <RethinkDBSequence>) innerJoin:(id <RethinkDBSequence>)sequence on:(RethinkDbJoinPredicate)predicate;
- (id <RethinkDBSequence>) outerJoin:(id <RethinkDBSequence>)sequence on:(RethinkDbJoinPredicate)predicate;
- (id <RethinkDBSequence>) eqJoin:(NSString*)key to:(id <RethinkDBSequence>)sequence options:(NSDictionary*)options;
- (id <RethinkDBSequence>) eqJoin:(NSString*)key to:(id <RethinkDBSequence>)sequence;
- (id <RethinkDBSequence>) zip;

- (id <RethinkDBSequence>) map:(RethinkDbMappingFunction)function;
- (id <RethinkDBSequence>) withFields:(NSArray*)fields;
- (id <RethinkDBSequence>) concatMap:(RethinkDbMappingFunction)function;
- (id <RethinkDBSequence>) orderBy:(id)order;
- (id <RethinkDBSequence>) skip:(NSInteger)count;
- (id <RethinkDBSequence>) limit:(NSInteger)count;
- (id <RethinkDBSequence>) slice:(NSInteger)start to:(NSInteger)end;
- (id <RethinkDBObject>) nth:(NSInteger)index;
- (id <RethinkDBArray>) indexesOf:(id)datum;
- (id <RethinkDBArray>) indexesOfPredicate:(RethinkDbMappingFunction)function;
- (id <RethinkDBObject>) inEmpty;
- (id <RethinkDBArray>) union:(id <RethinkDBSequence>)sequence;
- (id <RethinkDBSequence>) sample:(NSInteger)count;

- (id <RethinkDBObject>) reduce:(RethinkDbReductionFunction)function base:(id)base;
- (id <RethinkDBObject>) reduce:(RethinkDbReductionFunction)function;
- (id <RethinkDBObject>) count;
- (id <RethinkDBArray>) distinct;
//- (id <RethinkDBObject>) group:(RethinkDbGroupByFunction)groupFunction map:(RethinkDbMappingFunction)mapFunction andReduce:(RethinkDbReductionFunction)reduceFunction withBase:(id)base;
//- (id <RethinkDBObject>) group:(RethinkDbGroupByFunction)groupFunction map:(RethinkDbMappingFunction)mapFunction andReduce:(RethinkDbReductionFunction)reduceFunction;
- (id <RethinkDBArray>) groupBy:(id)columns reduce:(NSDictionary*)reductionObject;
- (id <RethinkDBArray>) groupByAndCount:(id)columns;
- (id <RethinkDBArray>) groupBy:(id)columns sum:(NSString*)attribute;
- (id <RethinkDBArray>) groupBy:(id)columns average:(NSString*)attribute;

- (id <RethinkDBSequence>) append:(id)object;
- (id <RethinkDBSequence>) prepend:(id)object;
- (id <RethinkDBSequence>) difference:id;
- (id <RethinkDBSequence>) setInsert:(id)value;
- (id <RethinkDBSequence>) setUnion:(id)array;
- (id <RethinkDBSequence>) setIntersection:(id)array;
- (id <RethinkDBSequence>) setDifference:(id)array;
- (id <RethinkDBSequence>) hasFields:(id)fields;
- (id <RethinkDBSequence>) insert:(id)object at:(NSUInteger)index;
- (id <RethinkDBSequence>) splice:(id)objects at:(NSUInteger)index;
- (id <RethinkDBSequence>) deleteAt:(NSUInteger)index to:(NSUInteger)end_index;
- (id <RethinkDBSequence>) deleteAt:(NSUInteger)index;
- (id <RethinkDBSequence>) changeAt:(NSUInteger)index value:(id)value;
- (id <RethinkDBArray>) keys;
- (id <RethinkDBStream>) changes:(NSDictionary*)options;

@end

@protocol RethinkDBArray <RethinkDBSequence>


@end

@protocol RethinkDBStream <RethinkDBSequence>


@end

@protocol RethinkDBTable <RethinkDBStream>

- (id <RethinkDBObject>) insert:(id)object options:(NSDictionary*)options;
- (id <RethinkDBObject>) insert:(id)object;
- (id <RethinkDBObject>) update:(id)object options:(NSDictionary*)options;
- (id <RethinkDBObject>) update:(id)object;
- (id <RethinkDBObject>) replace:(id)object options:(NSDictionary*)options;
- (id <RethinkDBObject>) replace:(id)object;
- (id <RethinkDBObject>) delete:(NSDictionary*)options;
- (id <RethinkDBObject>) delete;
- (id <RethinkDBObject>) sync;

- (id <RethinkDBObject>) get:(id)key;
- (id <RethinkDBSequence>) getAll:(NSArray*)keys options:(NSDictionary*)options;
- (id <RethinkDBSequence>) getAll:(NSArray *)keys;
- (id <RethinkDBSequence>) between:(id)lower and:(id)upper options:(NSDictionary*)options;
- (id <RethinkDBSequence>) between:(id)lower and:(id)upper;

@end


@protocol RethinkDBDatabase <RethinkDBRunnable>

- (id <RethinkDBObject>) tableCreate:(NSString*)name options:(NSDictionary*)options;
- (id <RethinkDBObject>) tableCreate:(NSString*)name;
- (id <RethinkDBObject>) tableDrop:(NSString*)name;
- (id <RethinkDBArray>) tableList:(NSString*)db;
- (id <RethinkDBArray>) tableList;
- (id <RethinkDBObject>) indexCreate:(NSString*)name;
- (id <RethinkDBObject>) indexDrop:(NSString*)name;
- (id <RethinkDBArray>) indexList;
- (id <RethinkDBArray>) indexStatus:(id)names;
- (id <RethinkDBArray>) indexWait:(id)names;

- (id <RethinkDBTable>) table:(NSString*)name options:(NSDictionary*)options;
- (id <RethinkDBTable>) table:(NSString*)name;
- (id <RethinkDBTable>) table:(NSString*)name db:(NSString*)database;

@end

@interface RethinkDbClient : NSObject <RethinkDBRunnable, RethinkDBObject, RethinkDBSequence, RethinkDBArray, RethinkDBStream, RethinkDBTable, RethinkDBDateTime, RethinkDBDatabase>

+ (RethinkDbClient*) clientWithURL:(NSURL*)url andError:(NSError**)error;

- (BOOL) close:(NSError**)error;

- (id <RethinkDBDatabase>) db: (NSString*)name;
- (id <RethinkDBObject>) dbCreate:(NSString*)name;
- (id <RethinkDBObject>) dbDrop:(NSString*)name;
- (id <RethinkDBArray>) dbList;

- (id <RethinkDBRunnable>) queryWithDictionary:(NSDictionary*)query;

@end
