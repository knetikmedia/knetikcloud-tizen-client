/*
 * SamiPaymentMethodTypeResource.h
 * 
 * 
 */

#ifndef SamiPaymentMethodTypeResource_H_
#define SamiPaymentMethodTypeResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiPaymentMethodTypeResource: public SamiObject {
public:
    SamiPaymentMethodTypeResource();
    SamiPaymentMethodTypeResource(String* json);
    virtual ~SamiPaymentMethodTypeResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPaymentMethodTypeResource* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);
    String* getPName();
    void setPName(String* pName);

private:
    Integer* pId;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiPaymentMethodTypeResource_H_ */
