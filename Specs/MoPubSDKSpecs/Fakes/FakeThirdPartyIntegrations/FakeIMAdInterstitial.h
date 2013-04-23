//
//  FakeGSFullScreenAd.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import "IMAdInterstitial.h"
#import "IMAdInterstitialDelegate.h"

@interface FakeIMAdInterstitial : IMAdInterstitial <FakeInterstitialAd>

@property (nonatomic, assign) IMAdRequest *request;
@property (nonatomic, assign) BOOL willPresentSuccessfully;
@property (nonatomic, assign) BOOL didPresent;

- (void)simulateLoadingAd;
- (void)simulateFailingToLoad;
- (void)simulateUserTap;
- (void)simulateUserDismissingAd;
- (void)simulateInterstitialFinishedDisappearing;

@end
