/*
 * SamiIOConfig.h
 * 
 * 
 */

#ifndef SamiIOConfig_H_
#define SamiIOConfig_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiIOConfig: public SamiObject {
public:
    SamiIOConfig();
    SamiIOConfig(String* json);
    virtual ~SamiIOConfig();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiIOConfig* fromJson(String* obj);

    String* getPCustomer();
    void setPCustomer(String* pCustomer);
    Boolean* getPEnabled();
    void setPEnabled(Boolean* pEnabled);
    String* getPEnvironment();
    void setPEnvironment(String* pEnvironment);
    String* getPProduct();
    void setPProduct(String* pProduct);

private:
    String* pCustomer;
Boolean* pEnabled;
String* pEnvironment;
String* pProduct;
};

} /* namespace Swagger */

#endif /* SamiIOConfig_H_ */
