var relationsart = 1;
var aspekte = 1;
var demografischerAspekt = 1;
var zielgruppe = 1;
var netz1, netz2,netz3,netz4;
var width = 816;
var height = 612;
var farben1 = ["","#FF0000","#00FF00","#0000FF","#FFFF00","#00FFFF","#FF00FF","#FFFFFF"]
var farben2 = function(farbcode) {
	  switch (farbcode) {
		  case 0: return "#ff0000";
		  case 1: return "#00ff00";
		  case 9: return "#FFFFFF";
	  }
  }


Network1 = function() {
  var allData, dragmove, force, hideDetails, link, linkedByIndex, linksG, mapNodes, neighboring1, neighboring2, neighboring3, network, node, nodesG, node_drag, setupData, showDetails, text, textG, tick, updateLinks, updateNodes, updateText;
  allData = [];
  linkedByIndex = {};
  force = d3.layout.force();

  network = function(selection, data) {
    var vis;
    allData = setupData(data);
    vis = d3.select(selection).append("svg").attr("width", width).attr("height", height);
    vis.append("defs").selectAll("marker")
    .data(["normal"])
	.enter().append("marker")
    .attr("id", function(d) { return d; })
    .attr("viewBox", "0 -5 10 10")
    .attr("refX", 25)
    .attr("refY", 0)
    .attr("markerWidth", 8)
    .attr("markerHeight", 8)
    .attr("orient", "auto")
	.append("path")
    .attr("d", "M 0 0 L -2.00 5.00 L 10.00 0 L -2.00 -5.00 z")
    .style("stroke", "#aaa")
    .style("fill", "#aaa")
    .style("opacity", "0.8");
    vis.append("defs").selectAll("marker")
    .data(["high"])
	.enter().append("marker")
    .attr("id", function(d) { return d; })
    .attr("viewBox", "0 -5 10 10")
    .attr("refX", 25)
    .attr("refY", 0)
    .attr("markerWidth", 8)
    .attr("markerHeight", 8)
    .attr("orient", "auto")
	.append("path")
    .attr("d", "M 0 0 L -2.00 5.00 L 10.00 0 L -2.00 -5.00 z")
    .style("stroke", "#aaa")
    .style("fill", "#555")
    .style("opacity", "1.0");
     vis.append("defs").selectAll("marker")
    .data(["low"])
	.enter().append("marker")
    .attr("id", function(d) { return d; })
    .attr("viewBox", "0 -5 10 10")
    .attr("refX", 25)
    .attr("refY", 0)
    .attr("markerWidth", 8)
    .attr("markerHeight", 8)
    .attr("orient", "auto")
	.append("path")
    .attr("d", "M 0 0 L -2.00 5.00 L 10.00 0 L -2.00 -5.00 z")
    .style("stroke", "#aaa")
    .style("fill", "#aaa")
    .style("opacity", "0.5");
    linksG = vis.append("g").attr("id", "links");
    nodesG = vis.append("g").attr("id", "nodes");
    textG = vis.append("g").attr("id", "text");
    node_drag = d3.behavior.drag().on("drag", dragmove);
    updateNodes();
    updateLinks();
    updateText();
    return;
  };

   setupData = function(data) {
    var nodesMap;
    data.nodes.forEach(function(n) {
      n.x = n.x * width;
      n.y = n.y * height;
      return n.radius = 10;
    });
    nodesMap = mapNodes(data.nodes);
    data.links.forEach(function(l) {
      l.source = nodesMap.get(l.source);
      l.target = nodesMap.get(l.target);
      return linkedByIndex[l.source.id + "," + l.target.id] = 1;
    });
    return data;
  };

  updateNodes = function() {
    node = nodesG.selectAll("circle.node").data(allData.nodes, function(d) {
      return d.id;
    });
    node.enter().append("circle").attr("class", "node").attr("cx", function(d) {
      return d.x;
    }).attr("cy", function(d) {
      return d.y;
    }).attr("r", function(d) {
      return d.radius;
    }).style("fill", function(d) {
		 return farben1[d.fg];
    }).style("stroke", "#555")
    .style("stroke-width", 1.0);
    node.on("mouseover", showDetails).on("mouseout", hideDetails).call(node_drag);
    return node.exit().remove();
  };

  updateLinks = function() {
    link = linksG.selectAll("line.link").data(allData.links, function(d) {
      return d.source.id + "_" + d.target.id;
    });
    link.enter().append("line").attr("class", "link").attr("stroke", "#aaa").attr("stroke-opacity", 0.8).attr("x1", function(d) {
      return d.source.x;
    }).attr("y1", function(d) {
      return d.source.y;
    }).attr("x2", function(d) {
      return d.target.x;
    }).attr("y2", function(d) {
      return d.target.y;
    }).style("marker-end",  "url(#normal)");
    return link.exit().remove();
  };

  updateText = function() {
    text = textG.selectAll("text.text").data(allData.nodes, function(d) {
      return d.id;
    });
    text.enter().append("text").text(function(d) {
		return d.name;
	}).attr("class", "text")
	.attr("x", function(d) {
      return d.x + 12;
    }).attr("y", function(d) {
      return d.y;
    }).attr("r", function(d) {
      return d.radius;
    }).attr("font-family", "sans-serif")
	.attr("font-size", "11px")
	.attr("fill", "black");
    return text.exit().remove();
  };

    dragmove =  function (d, i) {
	    if ((d3.event.dx < 0) && !((d.x + d3.event.dx) < 15 )) d.x += d3.event.dx;
	    if ((d3.event.dx > 0) && !((d.x + d3.event.dx) > (width - 15) )) d.x += d3.event.dx;
	    if ((d3.event.dy < 0) && !((d.y + d3.event.dy) < 15 )) d.y += d3.event.dy;
        if ((d3.event.dy > 0) && !((d.y + d3.event.dy) > (height - 15) )) d.y += d3.event.dy;
        tick();
    }

   tick = function(e) {
    node.attr("cx", function(d) {
      return d.x;
    }).attr("cy", function(d) {
      return d.y;
    });
    link.attr("x1", function(d) {
      return d.source.x;
    }).attr("y1", function(d) {
      return d.source.y;
    }).attr("x2", function(d) {
      return d.target.x;
    }).attr("y2", function(d) {
      return d.target.y;
    });
    return text.attr("x", function(d) {
      return d.x + 12;
    }).attr("y", function(d) {
      return d.y;
    });
  };

   mapNodes = function(nodes) {
    var nodesMap;
    nodesMap = d3.map();
    nodes.forEach(function(n) {
      return nodesMap.set(n.id, n);
    });
    return nodesMap;
  };

   neighboring1 = function(a, b) {
    return linkedByIndex[a.id + "," + b.id] || linkedByIndex[b.id + "," + a.id];
  };

   neighboring2 = function(a, b) {
    return linkedByIndex[a.id + "," + b.id];
  };

   neighboring3 = function(a, b) {
    return linkedByIndex[b.id + "," + a.id];
  };

  showDetails = function(d, i) {
    var content;
    content = '<p>' + d.name + '</p>';
    content += '<hr class="tooltip-hr">';
    content += '<p>Fokusgruppe ' + d.fg + '</p>';
    if (link) {
      link.attr("stroke", function(l) {
        if (l.source === d || l.target === d) {
          return "#555";
        } else {
          return "#aaa";
        }
      }).attr("stroke-opacity", function(l) {
        if (l.source === d || l.target === d) {
          return 1.0;
        } else {
          return 0.5;
        }
      }).style("marker-end", function(l) {
        if (l.source === d || l.target === d) {
          return "url(#high)";
        } else {
          return "url(#low)";
        }
      });
    }
    node.style("stroke", function(n) {
      if (n.searched || neighboring1(d, n)) {
        return "#555";
      } else {
        return "#aaa";
      }
    }).style("stroke-width", function(n) {
      if (n.searched || neighboring1(d, n)) {
		return 2.0;
      } else {
        return 1.0;
      }
    });
    jQuery('#infobox').html(content);
    jQuery('#infobox').removeClass("hidden");
    return d3.select(this).style("stroke", "black").style("stroke-width", 2.0);
  };

  hideDetails = function(d, i) {
  jQuery('#infobox').html("");
  jQuery('#infobox').addClass("hidden");
    node.style("stroke", function(n) {
      if (!n.searched) {
        return "#555";
      } else {
        return "#aaa";
      }
    }).style("stroke-width", function(n) {
      if (!n.searched) {
        return 1.0;
      } else {
        return 2.0;
      }
    });
    if (link) {
      return link.attr("stroke", "#aaa").attr("stroke-opacity", 0.8).style("marker-end",  "url(#normal)");
    }
  };

   daspfa = function() {
		node = nodesG.selectAll("circle.node").data(allData.nodes, function(d) {
			return d.id;
		});
		node.style("fill", function(d) {
			return farben1[d.fg];
		});
	}

   daspf2a = function() {
	dasp2 = jQuery("#ak").val();
	node = nodesG.selectAll("circle.node").data(allData.nodes, function(d) {
      return d.id;
    });
    node.style("fill", function(d) {
	  switch(dasp2) {
		 case "1": return farben2(d.ak1);
		 case "2": return farben2(d.ak2);
		 case "3": return farben2(d.ak3);
		 case "4": return farben2(d.ak4);
		 case "5": return farben2(d.ak5);
	  }
    });
	}

   daspf3a = function() {
	dasp3 = jQuery("#zg").val();
	node = nodesG.selectAll("circle.node").data(allData.nodes, function(d) {

      return d.id;
    });
    node.style("fill", function(d) {
	  switch(dasp3) {
		 case "1": return farben2(d.zg1);
		 case "2": return farben2(d.zg2);
		 case "7": return farben2(d.zg7);
		 case "3": return farben2(d.zg3);
		 case "4": return farben2(d.zg4);
	  }
    });
	}

  klick = function() { console.log(status); }

  return network;
};



var myNetwork;
myNetwork = Network1();
d3.json("../sites/default/files/data/bekanntheit2.json", function(json) {
    netz1 = myNetwork("#vis1", json);
    return netz1;
});


