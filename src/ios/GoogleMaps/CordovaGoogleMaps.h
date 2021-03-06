//
//  CordovaGoogleMaps.h
//  cordova-googlemaps-plugin v2
//
//  Created by Masashi Katsumata.
//
//

#import <Cordova/CDV.h>
#import <GoogleMaps/GoogleMaps.h>
#import "GoogleMapsViewController.h"
#import "PluginUtil.h"
#import "PluginMap.h"
#import "MyPluginLayer.h"
#import "MyPlgunProtocol.h"

@interface CordovaGoogleMaps : CDVPlugin<CLLocationManagerDelegate>

@property (nonatomic) MyPluginLayer *pluginLayer;
@property (nonatomic, strong) CLLocationManager *locationManager;
@property (nonatomic, strong) NSMutableArray *locationCommandQueue;
@property (nonatomic) NSMutableDictionary *pluginMaps;
@property (nonatomic) NSOperationQueue *executeQueue;

- (void)getMap:(CDVInvokedUrlCommand*)command;
- (void)getMyLocation:(CDVInvokedUrlCommand*)command;
- (void)clearHtmlElements:(CDVInvokedUrlCommand *)command;
- (void)putHtmlElements:(CDVInvokedUrlCommand *)command;
- (void)removeMap:(CDVInvokedUrlCommand *)command;
- (void)pause:(CDVInvokedUrlCommand *)command;
- (void)resume:(CDVInvokedUrlCommand *)command;
- (void)pauseResizeTimer:(CDVInvokedUrlCommand *)command;
- (void)resumeResizeTimer:(CDVInvokedUrlCommand *)command;
@end
