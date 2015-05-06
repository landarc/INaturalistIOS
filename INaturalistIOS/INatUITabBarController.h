//
//  INatUITabBarController.h
//  iNaturalist
//
//  Created by Ken-ichi Ueda on 2/23/12.
//  Copyright (c) 2012 iNaturalist. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Three20/Three20.h>

@class Taxon;
@class Project;

@interface INatUITabBarController : UITabBarController <TTNavigatorDelegate>
- (void)handleUserSavedObservationNotification:(NSNotification *)notification;
- (void)setObservationsTabBadge;
- (void)triggerNewObservationFlowForTaxon:(Taxon *)taxon project:(Project *)project;
@end
