/*
 * SamiBundledSku.h
 * 
 * 
 */

#ifndef SamiBundledSku_H_
#define SamiBundledSku_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiBundledSku: public SamiObject {
public:
    SamiBundledSku();
    SamiBundledSku(String* json);
    virtual ~SamiBundledSku();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBundledSku* fromJson(String* obj);

    Double* getPPriceOverride();
    void setPPriceOverride(Double* pPrice_override);
    Integer* getPQuantity();
    void setPQuantity(Integer* pQuantity);
    String* getPSku();
    void setPSku(String* pSku);

private:
    Double* pPrice_override;
Integer* pQuantity;
String* pSku;
};

} /* namespace Swagger */

#endif /* SamiBundledSku_H_ */
