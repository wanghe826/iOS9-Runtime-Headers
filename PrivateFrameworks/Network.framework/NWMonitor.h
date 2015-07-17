/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWMonitor : NSObject {
    NWNetworkDescription * _bestAvailableNetworkDescription;
    NWEndpoint * _endpoint;
    struct net_helper_endpoint_s { } * _helperEndpoint;
    unsigned long long  _monitorResult;
    NSArray * _networkDescriptionArray;
    NWParameters * _parameters;
    int  _status;
}

@property (readonly) NWNetworkDescription *bestAvailableNetworkDescription;
@property (readonly) NWEndpoint *endpoint;
@property struct net_helper_endpoint_s { }*helperEndpoint;
@property unsigned long long monitorResult;
@property (readonly) NSArray *networkDescriptionArray;
@property (readonly) NWParameters *parameters;
@property (readonly, copy) NSString *privateDescription;
@property (readonly) int status;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)getSavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (void)initialize;
+ (id)queue;
+ (void)saveMonitor:(id)arg1;

- (void).cxx_destruct;
- (id)bestAvailableNetworkDescription;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)endpoint;
- (void)handleMessage:(id)arg1;
- (struct net_helper_endpoint_s { }*)helperEndpoint;
- (id)initWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (id)initWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (unsigned long long)monitorResult;
- (id)networkDescriptionArray;
- (id)parameters;
- (id)privateDescription;
- (void)setHelperEndpoint:(struct net_helper_endpoint_s { }*)arg1;
- (void)setMonitorResult:(unsigned long long)arg1;
- (void)startHelperConnection;
- (int)status;

@end