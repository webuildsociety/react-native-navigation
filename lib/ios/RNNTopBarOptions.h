#import "RNNOptions.h"

@interface RNNTopBarOptions : RNNOptions

@property (nonatomic, strong) NSArray* leftButtons;
@property (nonatomic, strong) NSArray* rightButtons;
@property (nonatomic, strong) NSNumber* backgroundColor;
@property (nonatomic, strong) NSNumber* textColor;
@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* textFontFamily;
@property (nonatomic, strong) NSNumber* visible;
@property (nonatomic, strong) NSNumber* hideOnScroll;
@property (nonatomic, strong) NSNumber* buttonColor;
@property (nonatomic, strong) NSNumber* translucent;
@property (nonatomic, strong) NSNumber* transparent;
@property (nonatomic, strong) NSNumber* drawBehind;
@property (nonatomic, strong) NSNumber* textFontSize;
@property (nonatomic, strong) NSNumber* noBorder;
@property (nonatomic, strong) NSNumber* blur;
@property (nonatomic, strong) NSNumber* animate;
@property (nonatomic, strong) NSNumber* largeTitle;
@property (nonatomic, strong) NSString* testID;

@property (nonatomic, strong) NSString* customTitleViewName;
@property (nonatomic, strong) NSString* customViewName;

@end