#ifndef SamiDevicesApi_H_
#define SamiDevicesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiDeviceResource.h"
#include "SamiPage«DeviceResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiDevicesApi {
public:
  SamiDevicesApi();
  virtual ~SamiDevicesApi();

  SamiDeviceResource* 
  createDeviceUsingPOSTWithCompletion(SamiDeviceResource* device, void (* handler)(SamiDeviceResource*, SamiError*));
  void 
  deleteDeviceUsingDELETEWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiDeviceResource* 
  getDeviceUsingGETWithCompletion(Integer* _id, void (* handler)(SamiDeviceResource*, SamiError*));
  SamiPage«DeviceResource»* 
  getDevicesUsingGETWithCompletion(String* filterMake, String* filterModel, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«DeviceResource»*, SamiError*));
  void 
  updateDeviceUsingPUTWithCompletion(SamiDeviceResource* device, Integer* _id, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiDevicesApi_H_ */
