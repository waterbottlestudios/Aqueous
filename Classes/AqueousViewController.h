//
//  AqueousViewController.h
//  Aqueous

#import <UIKit/UIKit.h>
#import "SA_OAuthTwitterController.h"

@class SA_OAuthTwitterEngine;

@interface AqueousViewController : UIViewController <UITextViewDelegate, SA_OAuthTwitterControllerDelegate>
{ 
	IBOutlet UITextView *tweetTextView;
	
	SA_OAuthTwitterEngine				*_engine;	
}

@property(nonatomic, retain) IBOutlet UITextView *tweetTextView;

-(IBAction)updateTwitter:(id)sender; 

@end

