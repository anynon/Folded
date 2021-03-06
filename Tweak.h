#import <Foundation/Foundation.h>
#include <CSColorPicker/CSColorPicker.h>
//#import <UIKit/UIKitCore.h>
//Those two lines are only used when compiling via DragonBuild
//actually they make it uncompilable with theos
//i think my sdks are broken, why the hell UIKitCore is not found

@interface SBIconController : UIAlertController
+(id)sharedInstance;
@end

@interface SBIconListGridLayoutConfiguration
@property (nonatomic, assign) BOOL isFolder;

- (BOOL)getLocations;
- (NSUInteger)numberOfPortraitColumns;
- (NSUInteger)numberOfPortraitRows;
@end

/////////////////
@interface SBIconGridImage //I use this to change fix the iOS 13 folder icon crashes
//Actual iOS Methods:
+(id)gridImageForLayout:(id)arg1 previousGridImage:(id)arg2 previousGridCellIndexToUpdate:(unsigned long long)arg3 pool:(id)arg4 cellImageDrawBlock:(id)arg5 ;
@end

//Store the icon that sucessfully was used on SB launch, allowing me to reuse as well.
id lastIconSucess;

/////////////////

@interface SBIconView : UIView
-(id)_viewControllerForAncestor;
@end

@interface SBFloatyFolderView : UIView
-(void)_handleOutsideTap:(id)arg1;
-(void)layoutSubviews;
-(void)setBackgroundColor:(UIColor *)arg1;
-(UIColor *)randomColor;
@end

@interface SBFolderBackgroundMaterialSettings
-(UIColor *)randomColor;
@end

@interface SBFolderIconBackgroundView : UIView
@end

@interface SBFolderBackgroundView : UIView
-(void)layoutSubviews;
-(void)setBackgroundColor:(UIColor *)arg1;
@property (nonatomic, strong) UIVisualEffectView *customBlurView;
@property (nonatomic, strong) UIVisualEffectView *lightView;
@property (nonatomic, strong) UIVisualEffectView *darkView;
@property (nonatomic, strong) UIView *backgroundColorFrame;
@property (nonatomic, strong) CAGradientLayer *gradient;
@end

@interface SBFolderController : UIView
@property (nonatomic,readonly) UIView * containerView;
@end

@interface SBFolderControllerBackgroundView : UIView
@property (nonatomic, strong) UIVisualEffectView *blurView;
@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, assign) CGFloat aplha;
@property (nonatomic, strong) UIView *maView;
- (void)willRemoveSubview:(UIView *)subview;
-(UIColor *)randomColor;
-(void)layoutSubviews;
- (UIColor *)randomColor;
@end

@interface SBWallpaperEffectView : UIView
@property (nonatomic, strong) UIView *blurView;
@end

@interface SBFolderIconImageView : UIView
@property (nonatomic, strong) SBWallpaperEffectView *backgroundView;
-(BOOL)isAnimating;
-(void)_updateOverlayImage;
@end

@interface SBIconListPageControl : UIView
@end

@interface _SBIconGridWrapperView : UIView
@property (nonatomic, assign) CGAffineTransform transform;
-(SBFolderIconImageView *)folderIconImageView;
@end

@interface SBIconListFlowLayout
-(unsigned long long)maximumIconCount;
-(unsigned long long)numberOfColumnsForOrientation:(long long)arg1 ;
-(unsigned long long)numberOfRowsForOrientation:(long long)arg1 ;
@end

@class UITextField, UIFont;
@interface SBFolderTitleTextField : UITextField
@property (nonatomic, assign) CGRect frame;
@property (nonatomic, assign) CGRect bounds;
@property (nonatomic, strong) UIFont *font;
-(void)setFont:(id)arg1 fullFontSize:(id)arg2 ambientOnly:(BOOL)arg3;
-(void)setTextCentersHorizontally:(BOOL)arg1;
-(void)layoutSubviews;
@end

@interface NSUserDefaults (Folded)

-(id)objectForKey:(NSString *)key inDomain:(NSString *)domain;
-(void)setObject:(id)value forKey:(NSString *)key inDomain:(NSString *)domain; //thanks to R0wDrunner for these two lines of the interface :)
@end

@interface _UICustomBlurEffect : UIBlurEffect
@property (assign,nonatomic) double grayscaleTintLevel; 
@property (assign,nonatomic) double grayscaleTintAlpha; 
@property (assign,nonatomic) bool lightenGrayscaleWithSourceOver; 
@property (nonatomic,retain) UIColor* colorTint; 
@property (assign,nonatomic) double colorTintAlpha; 
@property (assign,nonatomic) double colorBurnTintLevel; 
@property (assign,nonatomic) double colorBurnTintAlpha; 
@property (assign,nonatomic) double darkeningTintAlpha; 
@property (assign,nonatomic) double darkeningTintHue; 
@property (assign,nonatomic) double darkeningTintSaturation; 
@property (assign,nonatomic) bool darkenWithSourceOver; 
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double saturationDeltaFactor; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double zoom;
@end

// Defining global variables and methods

// Preferences keys
NSDictionary *preferences;
BOOL enabled = YES;
BOOL backgroundAlphaEnabled;
double backgroundAlpha;
BOOL cornerRadiusEnabled;
double cornerRadius;
BOOL pinchToCloseEnabled;
BOOL customFrameEnabled;
BOOL customCenteredFrameEnabled;
CGFloat frameX;
CGFloat frameY;
CGFloat frameWidth;
CGFloat frameHeight;
BOOL customLayoutEnabled;
long long customLayoutRows;
long long customLayoutColumns;
BOOL hideTitleEnabled;
BOOL customTitleFontSizeEnabled;
double customTitleFontSize;
BOOL customTitleOffSetEnabled;
double customTitleOffSet;
BOOL customTitleXOffSetEnabled;
double customTitleXOffSet;
BOOL customFolderIconEnabled;
long long folderIconRows;
long long folderIconColumns;
BOOL twoByTwoIconEnabled;
int titleFontWeight;
int titleAlignment;
BOOL titleColorEnabled;
NSString *titleColor;
BOOL titleBackgroundEnabled;
NSString *titleBackgroundColor;
double titleBackgroundCornerRadius;
BOOL titleBackgroundBlurEnabled;
BOOL showInjectionAlerts;
BOOL customBlurBackgroundEnabled;
int customBlurBackground;
BOOL folderBackgroundColorEnabled;
NSString *folderBackgroundColor;
BOOL customTitleFontEnabled;
NSString *customTitleFont;
BOOL folderBackgroundBackgroundColorEnabled;
double backgroundAlphaColor;
NSString * folderBackgroundBackgroundColor;
BOOL randomColorBackgroundEnabled;
BOOL folderBackgroundColorWithGradientEnabled;
NSString *folderBackgroundColorWithGradient;
BOOL folderBackgroundColorWithGradientVerticalGradientEnabled; // bruh
BOOL hideFolderGridEnabled;
BOOL clearBackgroundIcons;
BOOL customWallpaperBlurEnabled;
double customWallpaperBlurFactor;
BOOL tapToCloseEnabled;
BOOL hideFolderIconBackground;
double hideDotsPref;
BOOL resizeFolderIconEnabled;
double resizeFactor;
BOOL insetsEnabled;
double topInset;
double sideInset;
double bottomInset;
BOOL closeFolderInApp;
BOOL enableCustomBlur;
double customBlurBlurFactor;
double customBlurColorTintAlpha;
double customBlurSaturationDeltafactor;
double customBlurRedFactor;
double customBlurGreenFactor;
double customBlurBlueFactor;

BOOL colorFolderIconBackground;
NSString *folderIconColor;

BOOL hasProcessLaunched;
BOOL hasInjectionFailed;
BOOL hasShownFailureAlert;
BOOL blankIconAlertShouldShow;
BOOL isInAFolder = NO;

#define PLIST_PATH @"/User/Library/Preferences/xyz.burritoz.thomz.folded.prefs.plist"
#define kIdentifier @"xyz.burritoz.thomz.folded.prefs"
#define kSettingsChangedNotification (CFStringRef)@"xyz.burritoz.thomz.folded.prefs/reload"
#define kSettingsPath @"/var/mobile/Library/Preferences/xyz.burritoz.thomz.folded.prefs.plist"

NSDictionary *prefs = nil;

inline NSString *StringForPreferenceKey(NSString *key) {
    NSDictionary *prefs = [NSDictionary dictionaryWithContentsOfFile:PLIST_PATH] ? : [NSDictionary new];
    return prefs[key];
}

static void *observer = NULL;

static void reloadPrefs() 
{
    if ([NSHomeDirectory() isEqualToString:@"/var/mobile"]) 
    {
        CFArrayRef keyList = CFPreferencesCopyKeyList((CFStringRef)kIdentifier, kCFPreferencesCurrentUser, kCFPreferencesAnyHost);

        if (keyList) 
        {
            prefs = (NSDictionary *)CFBridgingRelease(CFPreferencesCopyMultiple(keyList, (CFStringRef)kIdentifier, kCFPreferencesCurrentUser, kCFPreferencesAnyHost));

            if (!prefs) 
            {
                prefs = [NSDictionary new];
            }
            CFRelease(keyList);
        }
    } 
    else 
    {
        prefs = [NSDictionary dictionaryWithContentsOfFile:kSettingsPath];
    }
}

//There were so many issues with prefs I'm writing these out to be super long, but super safe
//Note to self -- Just don't use these in final release
static BOOL boolValueForKey(NSString *key, BOOL defaultValue) {
    return (prefs && [prefs objectForKey:key] ? [[prefs objectForKey:key] boolValue] : defaultValue);
}

static double numberForValue(NSString *key, double defaultValue) {
	return (prefs && [prefs objectForKey:key] ? [[prefs objectForKey:key] doubleValue] : defaultValue);
	//I'm pretty sure a double will return fine to any numeric variable
}

NSString *domain = @"/var/mobile/Library/Preferences/xyz.burritoz.thomz.folded.prefs.plist";

static void setObjectInPreset(id value, NSString *key) {
	[[NSUserDefaults standardUserDefaults] setObject:value forKey:key inDomain:domain]; //literally useless except to make the following method look neater
}

static void preferencesChanged() 
{
    CFPreferencesAppSynchronize((CFStringRef)kIdentifier);
    reloadPrefs();

	if(prefs==nil) {
		NSUserDefaults *prefss = [[NSUserDefaults standardUserDefaults] init];
		[prefss removePersistentDomainForName:@"xyz.burritoz.thomz.folded.prefs"];
		setObjectInPreset(@YES, @"enabled");
	}

	enabled = boolValueForKey(@"enabled", YES);
	backgroundAlphaEnabled = boolValueForKey(@"backgroundAlphaEnabled", NO);
	backgroundAlpha = numberForValue(@"backgroundAlpha", 1.0);
	cornerRadiusEnabled = boolValueForKey(@"cornerRadiusEnabled", NO);
	cornerRadius = numberForValue(@"cornerRadius", 38);
	pinchToCloseEnabled = boolValueForKey(@"pinchToCloseEnabled", NO);
	customFrameEnabled = boolValueForKey(@"customFrameEnabled", NO);
	customCenteredFrameEnabled = boolValueForKey(@"customCenteredFrameEnabled", NO);
	frameX = numberForValue(@"customFrameX", 0);
	frameY = numberForValue(@"customFrameY", 0);
	frameWidth = numberForValue(@"customFrameWidth", 300);
	frameHeight = numberForValue(@"customFrameHeight", 300);
	customLayoutEnabled = boolValueForKey(@"customLayoutEnabled", NO);
	customLayoutRows = numberForValue(@"customLayoutRows", 3);
	customLayoutColumns = numberForValue(@"customLayoutColumns", 3);
    hideTitleEnabled = boolValueForKey(@"hideTitleEnabled", NO);
    customTitleFontSizeEnabled = boolValueForKey(@"customTitleFontSizeEnabled", NO);
    customTitleFontSize = numberForValue(@"customTitleFontSize", 36);
    customTitleOffSetEnabled = boolValueForKey(@"customTitleOffSetEnabled", NO);
    customTitleOffSet = numberForValue(@"customTitleOffSet", 0);
	customTitleXOffSetEnabled = boolValueForKey(@"customTitleXOffSetEnabled", NO);
    customTitleXOffSet = numberForValue(@"customTitleXOffSet", 0);
	customFolderIconEnabled = boolValueForKey(@"customFolderIconEnabled", NO);
    folderIconRows = numberForValue(@"folderIconRows", 3);
	folderIconColumns = numberForValue(@"folderIconColumns", 3);
	twoByTwoIconEnabled = boolValueForKey(@"twoByTwoIconEnabled", NO);
	titleFontWeight = numberForValue(@"titleFontWeight", 1);
	titleAlignment = numberForValue(@"titleAlignment", 2);
	titleColorEnabled = boolValueForKey(@"titleColorEnabled", NO);
	titleColor = [prefs valueForKey:@"titleColor"];
	titleBackgroundEnabled = boolValueForKey(@"titleBackgroundEnabled", NO);
	titleBackgroundColor = [prefs valueForKey:@"titleBackgroundColor"];
	titleBackgroundCornerRadius = numberForValue(@"titleBackgroundCornerRadius", 10);
	titleBackgroundBlurEnabled = boolValueForKey(@"titleBackgroundBlurEnabled", NO);
	showInjectionAlerts = boolValueForKey(@"showInjectionAlerts", YES);
	customBlurBackgroundEnabled = boolValueForKey(@"customBlurBackgroundEnabled", NO);
	customBlurBackground = numberForValue(@"customBlurBackground", 1);
	folderBackgroundColorEnabled = boolValueForKey(@"folderBackgroundColorEnabled", NO);
	folderBackgroundColor = [prefs valueForKey:@"folderBackgroundColor"];
	customTitleFontEnabled = boolValueForKey(@"customTitleFontEnabled", NO);
	customTitleFont = [[prefs valueForKey:@"customTitleFont"] stringValue];
	folderBackgroundBackgroundColorEnabled = boolValueForKey(@"folderBackgroundBackgroundColorEnabled", NO);
	backgroundAlphaColor = numberForValue(@"backgroundAlphaColor", 0);
	folderBackgroundBackgroundColor = [prefs valueForKey:@"folderBackgroundBackgroundColor"];
	randomColorBackgroundEnabled = boolValueForKey(@"randomColorBackgroundEnabled", NO);
	folderBackgroundColorWithGradientEnabled = boolValueForKey(@"folderBackgroundColorWithGradientEnabled", NO);
	folderBackgroundColorWithGradient = [prefs valueForKey:@"folderBackgroundColorWithGradient"];
	folderBackgroundColorWithGradientVerticalGradientEnabled = boolValueForKey(@"folderBackgroundColorWithGradientVerticalGradientEnabled", NO);
	hideFolderGridEnabled = boolValueForKey(@"hideFolderGridEnabled", NO);
	clearBackgroundIcons = boolValueForKey(@"clearBackgroundIcons", NO);
	customWallpaperBlurEnabled = boolValueForKey(@"customWallpaperBlurEnabled", NO);
	customWallpaperBlurFactor = numberForValue(@"customWallpaperBlurFactor", 1.0);
	tapToCloseEnabled = boolValueForKey(@"tapToCloseEnabled", NO);
	hideFolderIconBackground = boolValueForKey(@"hideFolderIconBackground", NO);
	hideDotsPref = numberForValue(@"hideDotsPref", 1);
	resizeFolderIconEnabled = boolValueForKey(@"resizeFolderIconEnabled", NO);
	resizeFactor = numberForValue(@"resizeFactor", 1.0);
	insetsEnabled = boolValueForKey(@"insetsEnabled", NO);
	topInset = numberForValue(@"topInset", 0);
	sideInset = numberForValue(@"sideInset", 0);
	bottomInset = numberForValue(@"bottomInset", 0);
	closeFolderInApp = boolValueForKey(@"closeFolderInApp", NO);
	enableCustomBlur = boolValueForKey(@"enableCustomBlur", NO);
	customBlurBlurFactor = numberForValue(@"customBlurBlurFactor", 40);
	customBlurColorTintAlpha = numberForValue(@"customBlurColorTintAlpha", 0.3);
	customBlurSaturationDeltafactor = numberForValue(@"customBlurSaturationDeltafactor", 1.9);
	customBlurRedFactor = numberForValue(@"customBlurRedFactor", 1);
	customBlurGreenFactor = numberForValue(@"customBlurGreenFactor", 1);
	customBlurBlueFactor = numberForValue(@"customBlurBlueFactor", 1);

	colorFolderIconBackground = boolValueForKey(@"colorFolderIconBackground", NO);
	folderIconColor = [prefs valueForKey:@"folderIconColor"];

	if(customTitleFontEnabled && titleFontWeight!=1) { //disables custom font weighting, preventing a freeze
		titleFontWeight=1;
	}

	if(twoByTwoIconEnabled) {
		folderIconRows=2;
		folderIconColumns=2;
	}

	NSLog(@"[Folded]: Preferences reloaded sucessfully.");
	//Hopefully this works :D
}