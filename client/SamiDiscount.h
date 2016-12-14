/*
 * SamiDiscount.h
 * 
 * 
 */

#ifndef SamiDiscount_H_
#define SamiDiscount_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::String;


namespace Swagger {

class SamiDiscount: public SamiObject {
public:
    SamiDiscount();
    SamiDiscount(String* json);
    virtual ~SamiDiscount();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDiscount* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPName();
    void setPName(String* pName);
    Double* getPValue();
    void setPValue(Double* pValue);

private:
    String* pDescription;
String* pName;
Double* pValue;
};

} /* namespace Swagger */

#endif /* SamiDiscount_H_ */
