
#import <Foundation/Foundation.h>


@class Project;


@interface LRBuildResult : NSObject

- (instancetype)initWithProject:(Project *)project;

@property(nonatomic, readonly) Project *project;

- (void)addModifiedFiles:(NSArray *)files;

- (void)addReloadRequest:(NSDictionary *)reloadRequest;
- (BOOL)hasReloadRequests;
- (void)sendReloadRequests;

@end
