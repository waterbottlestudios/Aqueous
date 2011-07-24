//
//  AqueousAppDelegate.h
//  Aqueous


#import <UIKit/UIKit.h>

@class AqueousViewController;

@interface AqueousAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    AqueousViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet AqueousViewController *viewController;

@end

