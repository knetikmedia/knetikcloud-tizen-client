#ifndef SamiUtilMaintenanceApi_H_
#define SamiUtilMaintenanceApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiMaintenance.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUtilMaintenanceApi {
public:
  SamiUtilMaintenanceApi();
  virtual ~SamiUtilMaintenanceApi();

  void 
  deleteMaintenanceWithCompletion( void(* handler)(SamiError*));
  SamiMaintenance* 
  getMaintenanceWithCompletion( void (* handler)(SamiMaintenance*, SamiError*));
  void 
  setMaintenanceWithCompletion(SamiMaintenance* maintenance, void(* handler)(SamiError*));
  void 
  updateMaintenanceWithCompletion(SamiMaintenance* maintenance, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUtilMaintenanceApi_H_ */
