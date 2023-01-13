#ifndef Plugger_h
#define Plugger_h


#endif /* Plugger_h */

@class PluggerUser;
@protocol Initializable;
@protocol Configurable;

@interface Plugger : NSObject

@property (readonly) PluggerUser* user;

+ (void)initialize;
+ (id<Initializable, Configurable>)getPlugin;

@end
