/*
 * SamiPayBySavedMethodRequest.h
 * 
 * 
 */

#ifndef SamiPayBySavedMethodRequest_H_
#define SamiPayBySavedMethodRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiPayBySavedMethodRequest: public SamiObject {
public:
    SamiPayBySavedMethodRequest();
    SamiPayBySavedMethodRequest(String* json);
    virtual ~SamiPayBySavedMethodRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPayBySavedMethodRequest* fromJson(String* obj);

    Integer* getPPaymentMethod();
    void setPPaymentMethod(Integer* pPayment_method);

private:
    Integer* pPayment_method;
};

} /* namespace Swagger */

#endif /* SamiPayBySavedMethodRequest_H_ */
