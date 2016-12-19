/*
 * SamiStoreListRequest.h
 * 
 * 
 */

#ifndef SamiStoreListRequest_H_
#define SamiStoreListRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;


namespace Swagger {

class SamiStoreListRequest: public SamiObject {
public:
    SamiStoreListRequest();
    SamiStoreListRequest(String* json);
    virtual ~SamiStoreListRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiStoreListRequest* fromJson(String* obj);

    Boolean* getPIgnoreLocation();
    void setPIgnoreLocation(Boolean* pIgnore_location);
    Boolean* getPInStockOnly();
    void setPInStockOnly(Boolean* pIn_stock_only);
    Integer* getPLimit();
    void setPLimit(Integer* pLimit);
    Integer* getPPage();
    void setPPage(Integer* pPage);
    Boolean* getPUseCatalog();
    void setPUseCatalog(Boolean* pUse_catalog);

private:
    Boolean* pIgnore_location;
Boolean* pIn_stock_only;
Integer* pLimit;
Integer* pPage;
Boolean* pUse_catalog;
};

} /* namespace Swagger */

#endif /* SamiStoreListRequest_H_ */
